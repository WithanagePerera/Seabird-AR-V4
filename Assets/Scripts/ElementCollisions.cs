using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementCollisions : MonoBehaviour
{
    public GameObject LineRendererParent;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name.ToString().Contains("(Clone)"))
            return;
        LineRendererParent.GetComponent<CloneLineRenderer>().generateLine(gameObject, collision.gameObject);
    }
}
