/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   thread_create_3.cpp
 * Author: Mateusz Krainski
 *
 * Created on October 12, 2018, 5:49 PM
 */

#include <iostream>
#include <thread>

using namespace std;

class MyThreadObject{
public:
    void operator()(){
        cout << "This is printed from thread\n";
    }
};

int main(int argc, char** argv) {
    MyThreadObject class_object;
    thread thread_object(class_object);
    cout << "This is printed from main\n";
    thread_object.join();
    cout << "Main finishing" << endl;
    return 0;   
}