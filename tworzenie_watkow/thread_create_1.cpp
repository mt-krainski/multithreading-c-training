/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   thread_create_1.cpp
 * Author: Mateusz Krainski
 *
 * This program is to demonstrate basic thread creation using a function
 * Created on October 12, 2018, 5:49 PM
 */

#include <iostream>
#include <thread>

using namespace std;


void perform_operation(){
    cout << "This is printed from thread\n";
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    thread thread_object(perform_operation);
    
    cout << "This is printed from main\n";
    
    thread_object.join();
    
    cout << "Main finishing" << endl;

    return 0;
        
}

