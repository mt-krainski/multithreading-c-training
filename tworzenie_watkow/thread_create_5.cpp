/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
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