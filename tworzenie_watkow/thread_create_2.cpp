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
 * File:   thread_create_2.cpp
 * Author: Mateusz Krainski
 * This program is to demonstrate basic thread creation using a function 
 * with a parameter
 * Created on October 12, 2018, 5:49 PM
 */

#include <iostream>
#include <thread>

using namespace std;


void perform_operation(int value){
    cout << "This is printed from thread\n";
    cout << "Thread received parameter: "<< value <<"\n";
}

int main(int argc, char** argv) {
    thread thread_object(perform_operation, 1);
    thread thread_object2(perform_operation, 2);
    cout << "This is printed from main\n";
    thread_object.join();
    thread_object2.join();
    cout << "Main finishing" << endl;
    return 0;   
}