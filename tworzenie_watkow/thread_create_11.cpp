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
 * File:   thread_create_11.cpp
 * Author: Mateusz@Krainski.eu
 *
 * This program demonstrates thread ids
 * Created on October 14, 2018, 10:37 AM
 */

#include <iostream>
#include <thread>
#include <sstream>

using namespace std;


void thread_function(){
    std::stringstream to_be_displayed;
    to_be_displayed <<"I'm a thread and this is my id: "
            << this_thread::get_id() <<"\n";
    
    cout << to_be_displayed.str();
}

int main(int argc, char** argv) {

    const int ARRAY_SIZE=5;
    
    cout << "The default thread id is: " << thread::id() << "\n";
    
    cout << "Creating "<< ARRAY_SIZE <<" threads...\n";
    
    thread thread_array[ARRAY_SIZE];
    
    for(int i=0; i<ARRAY_SIZE; i++){
        thread_array[i] = thread(thread_function);
    }
    
    for(int i=0; i<ARRAY_SIZE; i++){
        stringstream to_be_displayed;
        to_be_displayed << "I'm main() and I'm waiting for thread " 
                << thread_array[i].get_id() << " to finish\n";
        cout << to_be_displayed.str();
        
        thread_array[i].join();
    }
    
    cout << "Threads have been joined\n";
    
    for(int i=0; i<ARRAY_SIZE; i++){
        cout << "Object " << i << " now has id: " 
                << thread_array[i].get_id() << "\n";
    }
    
    cout << "Creating "<< ARRAY_SIZE <<" threads...\n";
    
    for(int i=0; i<ARRAY_SIZE; i++){
        thread_array[i] = thread(thread_function);
    }
    
    for(int i=0; i<ARRAY_SIZE; i++){
        stringstream to_be_displayed;
        to_be_displayed << "I'm main() and I'm detaching thread " 
                << thread_array[i].get_id() << "\n";
        cout << to_be_displayed.str();
        
        thread_array[i].detach();
    }
    
    cout << "Threads have been detached\n";
    
    for(int i=0; i<ARRAY_SIZE; i++){
        cout << "Object " << i << " now has id: " 
                << thread_array[i].get_id() << "\n";
    }
    
    return 0;
}

