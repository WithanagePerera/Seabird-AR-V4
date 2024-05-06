using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

public class CloneLineRenderer : MonoBehaviour
{
    public LineRenderer lineClone;
    StringBuilder cloneName = new StringBuilder("LineClone");
    public GameObject[] recentLinks = new GameObject[2];

    string[] menuObjectNames = { "Swimlane", "Start Node", "End Node", "Action", "Join/Fork", "Decision/Merge", 
        "Item", "Expand Grid Down", "Expand Grid Right", "Trash", "Grid Transparency Toggle", "Top Border",
        "Bottom Border", "Left Border", "Right Border"};

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void generateLine(GameObject object1, GameObject object2)
    {
        if (menuObjectNames.Contains(object2.name.ToString()) || menuObjectNames.Contains(object1.name.ToString()))
            return;

        if (recentLinks[0] != null && recentLinks[1] != null)
        {
            if (recentLinks.Contains(object1) && recentLinks.Contains(object2))
                return;

            if (menuObjectNames.Contains(object1.name.ToString()) || menuObjectNames.Contains(object2.name.ToString()))
                return;
        }

        //Debug.LogError($"Object 1 name: {object1.name}");
        //Debug.LogError($"Object 2 name: {object2.name}");

        LineRenderer clone = Instantiate(lineClone);
        clone.gameObject.SetActive(true);

        clone.transform.parent = lineClone.transform.parent;
        cloneName.Append("_");
        lineClone.name = name.ToString();

        clone.GetComponent<ElementLinker>().object1 = object1;
        clone.GetComponent<ElementLinker>().object2 = object2;

        addNewConnectiontoHash(object1, object2, clone);

        recentLinks[0] = object1;
        recentLinks[1] = object2;
    }

    public void addNewConnectiontoHash(GameObject object1, GameObject object2, LineRenderer line)
    {
        if (ElementLinker.connections.ContainsKey(object1))
        {
            ArrayList connections = ElementLinker.connections[object1];
            connections.Add(line);
            ElementLinker.connections[object1] = connections;
        }
        else
        {
            ArrayList connections = new ArrayList();
            connections.Add(line);
            ElementLinker.connections[object1] = connections;
        }

        if (ElementLinker.connections.ContainsKey(object2))
        {
            ArrayList connections = ElementLinker.connections[object2];
            connections.Add(line);
            ElementLinker.connections[object2] = connections;
        }
        else
        {
            ArrayList connections = new ArrayList();
            connections.Add(line);
            ElementLinker.connections[object2] = connections;
        }
    }
}
