/* Graph.h
 * This class is used to store the data of a graph.
 * $author:hopeful
 * $create date:2016.03.05 00:35
 * $last change date 2016.03.05
 */

#pragam once

#ifndef _GRAPH_H
#define _GRAPH_H

#include <list>

#define MAXV 600 //Maximum number of vertex
#define MAXW 20 //Maximum weight of edge

typedef struct edge{
	int LnkID;
	int SrcID;
	int DstID;
	int Cost;
}Edge;

typedef std::list<Edge> LISTEDGE;

class Graph {
public:
	Graph();
	~Graph();
	void addEdge(int,int,int,int); //add an edge into this graph
private:
	LISTEDGE edges; //the list that save all edges' information
}

#endif
