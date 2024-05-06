using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class DeleteElement : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject objectBeingGrabbed;

    public static ArrayList gridElements = new ArrayList();
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void setObjectBeingGrabbed(GameObject grabbed)
    {
        objectBeingGrabbed = grabbed.gameObject;
    }

    public void unsetObjectBeingGrabbed()
    {
        objectBeingGrabbed = null;
    }

    public void deleteElement()
    {
        if (ElementLinker.connections.ContainsKey(objectBeingGrabbed)) 
        { 
            ArrayList connections = ElementLinker.connections[objectBeingGrabbed];
            foreach (LineRenderer line in connections) 
            { 
                if (line != null)
                    Destroy(line.gameObject);
            }

            ElementLinker.connections.Remove(objectBeingGrabbed);
        }

        Destroy(objectBeingGrabbed);
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.LogError("Object detected");
        Destroy(collision.gameObject);
        gridElements.Remove(collision.gameObject);
    }

    public void clearAllGridElements()
    {
        foreach (GameObject element in gridElements)
        {
            objectBeingGrabbed = element;
            deleteElement();
        }

        gridElements.Clear();
    }

}
