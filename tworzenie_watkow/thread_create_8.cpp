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
 * File:   thread_create_8.cpp
 * Author: Mateusz@Krainski.eu
 *
 * This program demonstrates the thread detach behavior
 * Created on October 14, 2018, 1:19 AM
 */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int get_elapsed_time(){
    static chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    
    chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    
    return std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
}

void perform_operation(){
    this_thread::sleep_for(chrono::seconds(2));
    cout << "["<< get_elapsed_time() <<"] This is printed from thread\n";
}

int main(int argc, char** argv) {
    
    
    cout << "["<< get_elapsed_time() <<"] Creating thread...\n";
    thread thread_object(perform_operation);
    cout << "["<< get_elapsed_time() <<"] Thread created, waiting for join...\n";
    thread_object.join();
    cout << "["<< get_elapsed_time() <<"] Thread joined!\n";
    
    cout << "["<< get_elapsed_time() <<"] Creating thread...\n";
    thread thread_object2(perform_operation);
    cout << "["<< get_elapsed_time() <<"] Thread created, detaching...\n";
    thread_object2.detach();
    cout << "["<< get_elapsed_time() <<"] Thread detached!\n";
    
    cout << "["<< get_elapsed_time() <<"] Main sleeping...\n";
    this_thread::sleep_for(chrono::seconds(3));
    
    cout << "["<< get_elapsed_time() <<"] Creating thread...\n";
    thread thread_object3(perform_operation);
    cout << "["<< get_elapsed_time() <<"] Thread created, detaching...\n";
    thread_object3.detach();
    cout << "["<< get_elapsed_time() <<"] Thread detached!\n";
    cout << "["<< get_elapsed_time() <<"] Main finishing...\n";

    return 0;
        
}

