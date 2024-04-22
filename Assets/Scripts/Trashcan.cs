using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trashcan : MonoBehaviour
{
    // Start is called before the first frame update

    public static ArrayList gridElements = new ArrayList();
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.LogError("Object detected");
        Destroy(collision.gameObject);
        gridElements.Remove(collision.gameObject);
    }

    private void clearAllGridElements()
    {
        foreach (GameObject element in gridElements) 
        {
            Destroy(element);
        }

        gridElements.Clear();
    }
}
