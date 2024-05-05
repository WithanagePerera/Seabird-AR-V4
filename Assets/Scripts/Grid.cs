using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;

public class Grid : MonoBehaviour
{
    public GameObject plane, grid;
    public int rows = 26, columns = 40;
    // Start is called before the first frame update
    void Start()
    {
        renderGrid(rows, columns);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void renderGrid(int Rows, int Columns)
    {
        float x_displacement = plane.GetComponent<MeshRenderer>().bounds.size.x;
        float y_displacement = plane.GetComponent<MeshRenderer>().bounds.size.y;
        for (int x = 0; x < Rows; x++)
        {
            for (int y = 0; y < Columns; y++)
            {
                // Instantiate the game object here
                GameObject clone = Instantiate(plane);
                clone.transform.parent = transform.parent;
                clone.transform.position = new Vector3(plane.transform.position.x + (y + 1) * (x_displacement + 0.0001f), plane.transform.position.y - (x * y_displacement), plane.transform.position.z); ;
            }
        }


        plane.SetActive(false);
        gameObject.SetActive(false);
    }

    public void destroyGrid()
    {
        foreach (Transform child in grid.transform)
        {
            if (child.gameObject.name.Equals("Clone(Clone)"))
                Object.Destroy(child.gameObject);
        }

        plane.SetActive(true);
        gameObject.SetActive(true);
    }

    public void expandGridDown()
    {
        destroyGrid();
        renderGrid(rows++, columns);
    }

    public void expandGridRight()
    {
        destroyGrid();
        renderGrid(rows, columns++);
    }

    public void toggleGrid()
    {
        grid.SetActive(!grid.activeSelf);
    }
}
