using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloneItem : MonoBehaviour
{

    public GameObject cloneReference;
    public void cloneItem(int ItemNumber)
    {
        string name = gameObject.name + "_";
        GameObject clone = Instantiate(cloneReference);
        clone.name = name;
        clone.transform.parent = cloneReference.transform.parent;
        clone.transform.localScale = cloneReference.transform.localScale;

        clone.transform.position = NewItemHandler.positionsArray[ItemNumber];
        clone.transform.position = new Vector3(clone.transform.position.x + 0.1f, clone.transform.position.y, clone.transform.position.z);

        clone.SetActive(true);
    }
}
