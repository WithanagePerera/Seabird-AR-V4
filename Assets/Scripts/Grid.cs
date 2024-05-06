using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;

public class Grid : MonoBehaviour
{
    public GameObject plane, grid;
    public GameObject topBorder, bottomBorder, leftBorder, rightBorder;
    private int horizontalBorderInitialScale = 1, verticalBorderInitialScale = 1;
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
        bool updateTopBottom = true, updateLeftRight = true, updateRight = true, updateBottom = true;

        float x_displacement = plane.GetComponent<MeshRenderer>().bounds.size.x;
        float y_displacement = plane.GetComponent<MeshRenderer>().bounds.size.y;
        for (int x = 0; x < Rows; x++)
        {
            for (int y = 0; y < Columns; y++)
            {
                // Instantiate the game object here
                GameObject clone = Instantiate(plane);
                clone.transform.parent = transform.parent;
                clone.transform.position = new Vector3(plane.transform.position.x + (y + 1) * (x_displacement + 0.0001f), plane.transform.position.y - (x * y_displacement), plane.transform.position.z);
                if (y == Columns / 2 && updateTopBottom)
                { 
                    topBorder.transform.position = new Vector3(clone.transform.position.x, topBorder.transform.position.y, topBorder.transform.position.z);
                    bottomBorder.transform.position = new Vector3(clone.transform.position.x, bottomBorder.transform.position.y, bottomBorder.transform.position.z);

                    topBorder.transform.localScale = new Vector3(horizontalBorderInitialScale * (columns + 1), topBorder.transform.localScale.y, topBorder.transform.localScale.z);
                    bottomBorder.transform.localScale = new Vector3(horizontalBorderInitialScale * (columns + 1), bottomBorder.transform.localScale.y, bottomBorder.transform.localScale.z);

                    updateTopBottom = false;
                }

                if (y == Columns - 1 && updateRight)
                {
                    rightBorder.transform.position = new Vector3(clone.transform.position.x + x_displacement/2f, rightBorder.transform.position.y, rightBorder.transform.position.z);

                    updateRight = false;
                }

                if (x == Rows - 1 && updateBottom)
                {
                    bottomBorder.transform.position = new Vector3(bottomBorder.transform.position.x, clone.transform.position.y - y_displacement/2f, bottomBorder.transform.position.z);

                    updateBottom = false;
                }

                if (x == Rows / 2 && updateLeftRight)
                {
                    leftBorder.transform.position = new Vector3(leftBorder.transform.position.x, clone.transform.position.y, leftBorder.transform.position.z);
                    rightBorder.transform.position = new Vector3(rightBorder.transform.position.x, clone.transform.position.y, rightBorder.transform.position.z);

                    leftBorder.transform.localScale = new Vector3(verticalBorderInitialScale * (rows + 1), leftBorder.transform.localScale.y, leftBorder.transform.localScale.z);
                    rightBorder.transform.localScale = new Vector3(verticalBorderInitialScale * (rows + 1), rightBorder.transform.localScale.y, rightBorder.transform.localScale.z);

                    updateLeftRight = false;
                }
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
        renderGrid(++rows, columns);
    }

    public void expandGridRight()
    {
        destroyGrid();
        renderGrid(rows, ++columns);
    }

    public void toggleGrid()
    {
        grid.SetActive(!grid.activeSelf);
    }
}
