using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewItemHandler : MonoBehaviour
{
    public GameObject SwimLane;
    public GameObject StartNode;
    public GameObject EndNode;
    public GameObject Action;
    public GameObject Join_Fork;
    public GameObject Decision_Merge;
    public GameObject Item;

    public static Vector3[] positionsArray = new Vector3[8];

    // Start is called before the first frame update
    void Start()
    {
        positionsArray[0] = SwimLane.transform.position;
        positionsArray[1] = StartNode.transform.position;
        positionsArray[2] = EndNode.transform.position;
        positionsArray[3] = Action.transform.position;
        positionsArray[4] = Join_Fork.transform.position;
        positionsArray[5] = Decision_Merge.transform.position;
        positionsArray[6] = Item.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
