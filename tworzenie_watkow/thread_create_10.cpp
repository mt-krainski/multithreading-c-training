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
 * File:   thread_create_10.cpp
 * Author: Mateusz@Krainski.eu
 *
 * This program demonstrates improper thread handling - detaching and joining
 * multiple times
 * Created on October 14, 2018, 10:31 AM
 */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void this_will_fail(){
    thread thread_object([]{
        cout<<"This is printed from thread\n";
    } );
    
    thread_object.detach();
    this_thread::sleep_for(chrono::milliseconds(1));
    thread_object.join();
}

int main(int argc, char** argv) {

    this_will_fail();
    this_thread::sleep_for(chrono::milliseconds(2));
   
    cout << "This is printed from main\n";
    
    return 0;
    
}

