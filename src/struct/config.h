//
// Created by Sumedhe Dissanayake on 10/28/18.
//

#ifndef SOM_CONFIG_H
#define SOM_CONFIG_H

#include <string>

#include "../init.h"

using namespace std;

struct Config {
    int x_dim;
    int y_dim;
    int dimension;
    string grid_type;
    int iteration_limit;
    float starting_learning_rate;
    string node_initialization_method;
    string learning_rate_function;
    string neighbourhood_function;
    float min_node_weight;
    float max_node_weight;
    string input_file_path;

    // Constructor: Default values
    Config(){
        x_dim                      = DEFAULT_X_DIM;
        y_dim                      = DEFAULT_Y_DIM;
        dimension                  = DEFUALT_DIMENSION;
        grid_type                  = DEFAULT_GRID_TYPE;
        iteration_limit            = DEFAULT_ITERATION_LIMIT;
        starting_learning_rate     = DEFAULT_STARTING_LEARNING_RATE;
        node_initialization_method = DEFAULT_NODE_INITIALIZATION_METHOD;
        learning_rate_function     = DEFAULT_LEARNING_RATE_FUNCTION;
        neighbourhood_function     = DEFAULT_NEIGHBOURHOOD_FUNCTION;
        min_node_weight            = DEFAULT_MIN_NODE_WEIGHT;
        max_node_weight            = DEFAULT_MAX_NODE_WEIGHT;
        input_file_path            = DEFAULT_INPUT_FILE_PATH;
    }
};

#endif //SOM_CONFIG_H
