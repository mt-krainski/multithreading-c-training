/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   thread_create_2.cpp
 * Author: Mateusz Krainski
 *
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