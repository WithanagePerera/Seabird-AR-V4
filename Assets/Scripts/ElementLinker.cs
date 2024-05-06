using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementLinker : MonoBehaviour
{
    public LineRenderer lineRenderer;
    public GameObject object1, object2;
    Vector3[] positions = new Vector3[2];

    public static Dictionary<GameObject, ArrayList> connections = new Dictionary<GameObject, ArrayList>();

    // Start is called before the first frame update
    void Start()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        lineRenderer.positionCount = 2;
        positions[0] = object1.transform.position;
        positions[0].z += 0.001f;
        positions[1] = object2.transform.position;
        positions[1].z += 0.001f;

        lineRenderer.SetPositions(positions);
    }
}
