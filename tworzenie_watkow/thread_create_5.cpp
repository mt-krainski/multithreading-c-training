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
 * File:   thread_create_5.cpp
 * Author: Mateusz Krainski
 *
 * This program is to demonstrate basic thread creation using a class object
 * Created on October 12, 2018, 5:49 PM
 */

#include <iostream>
#include <thread>

using namespace std;

class MyThreadObject{
public:
    
    int value = 1;
    
    void normal_method(){
        cout << "This is printed from thread\n";
        cout << "Value is: " << value << "\n";
    }
    
    void parameter_method(int parameter){
        cout << "This is printed from thread\n";
        cout << "Parameter is: " << parameter << "\n";
    }
};

int main(int argc, char** argv) {
    
    MyThreadObject class_object;
    thread thread_object(&MyThreadObject::normal_method, class_object);
    cout << "This is printed from main\n";
    thread_object.join();
    
    thread thread_object2(&MyThreadObject::parameter_method, class_object, 3);
    cout << "This is printed from main\n";
    thread_object2.join();
    
    cout << "Main finishing" << endl;
   
    return 0;   
}