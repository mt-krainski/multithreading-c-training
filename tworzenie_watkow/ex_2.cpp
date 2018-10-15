/*
 * Copyright 2018 Mateusz@Krainski.eu.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * File:   ex_2.cpp
 * Author: Mateusz@Krainski.eu
 *
 * Exemplar solution to exercises 3-6
 * 
 * Created on October 15, 2018, 4:34 PM
 */

#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>

using namespace std;

int global_variable = 0;

long int time_it();

void increment_variable(int iterations){
    for(int i=0; i<iterations; i++){
        global_variable++;
    }
}

int main(int argc, char** argv) {

    time_it();
    
    const int ITERATIONS = 100000000;
    
    thread thread_object(increment_variable, ITERATIONS);
    thread thread_object2(increment_variable, ITERATIONS);
    
    thread_object.join();
    thread_object2.join();
    
    cout << "[main()] Global variable is now: " << global_variable << "\n";
    
    cout << "[main()] Execution time: " << time_it()/1000.0 <<" ms\n";
    
    return 0;
    
}


/**
 * Measures time since previous call to it. First call returns 0
 * @return time duration in us since previous call. First call returns 0
 */
long int time_it(){
    static bool first_call = true;
    static chrono::high_resolution_clock::time_point t1 = chrono::high_resolution_clock::now();
    chrono::high_resolution_clock::time_point t2 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>( t2 - t1 ).count();
    if(!first_call){
        t1 = chrono::high_resolution_clock::now();
        return duration;
    } else {
        first_call = false;
        return 0;
    }
}