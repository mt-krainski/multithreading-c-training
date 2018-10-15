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
 * File:   thread_create_12.cpp
 * Author: Mateusz@Krainski.eu
 *
 * This file provides an exemplar solution to exercises 1 - 2
 * 
 * Created on October 15, 2018, 16:28 AM
 */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main(int argc, char** argv) {

    thread thread_object([]{
        cout<<"Thread is executing...\n";
        
        this_thread::sleep_for(chrono::microseconds(1));
        
        cout<<"Thread finished\n";
    } );
    
    thread_object.detach();
   
    cout << "This is printed from main\n";
    
    return 0;
    
}

