/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   thread_create_6.cpp
 * Author: Mateusz Krainski
 *
 * Created on October 13, 2018, 10:53 PM
 */

#include <iostream>
#include <thread>

using namespace std;

int main(int argc, char** argv) {
    
    thread thread_object([]{
        cout<<"This is printed from thread\n";
    } );
    
    cout << "This is printed from main\n";
    
    thread_object.join();
    
    return 0;
}

