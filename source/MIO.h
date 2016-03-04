/* MIO.h
 * This class will manager all input/output of the .csv files.
 * $author:hopeful
 * $create date:2015.03.05 00:15
 * $last change date:2015.03.05
 */
#pragam once

#ifndef _MIO_H
#define _MIO_H	1

#include <fstream.h>
#include <string>
#include "Graph.h"

class MIO {
public:
	static void readGraphData(string,Graph&); //read a graph from the given .csv file
};

#endif
