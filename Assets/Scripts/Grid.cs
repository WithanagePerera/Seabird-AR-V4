using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid : MonoBehaviour
{
    public GameObject plane, grid;
    public int rows, columns;
    // Start is called before the first frame update
    void Start()
    {
        float x_displacement = plane.GetComponent<MeshRenderer>().bounds.size.x;
        float y_displacement = plane.GetComponent<MeshRenderer>().bounds.size.y;
        for (int x = 0; x < rows; x++)
        {
            for (int y = 0; y < columns; y++)
            {
                // Instantiate the game object here
                GameObject clone = Instantiate(plane);
                clone.transform.parent = transform.parent;
                clone.transform.position = new Vector3(plane.transform.position.x + (y + 1) * (x_displacement + 0.0001f), plane.transform.position.y - (x * y_displacement), plane.transform.position.z);;
            }
        }


        plane.SetActive(false);
        gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void toggleGrid()
    {
        grid.SetActive(!grid.activeSelf);
    }
}
