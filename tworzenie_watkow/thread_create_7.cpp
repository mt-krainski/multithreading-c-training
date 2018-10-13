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
 * File:   thread_create_7.cpp
 * Based on: 
 * https://thispointer.com/c11-multithreading-part-2-joining-and-detaching-threads/
 *
 * This program is to demonstrate RAII for threads
 * Created on October 13, 2018, 10:53 PM
 */

#include <iostream>
#include <thread>
class ThreadRAII {
    std::thread & m_thread;
    public:
        ThreadRAII(std::thread  & threadObj) : m_thread(threadObj) { }
        ~ThreadRAII() {
            // Check if thread is joinable then detach the thread
            if(m_thread.joinable()) 
                m_thread.detach();
            
        }
};
void thread_function()
{
    for(int i = 0; i < 10000; i++);
        std::cout<<"thread_function Executing"<<std::endl;
}
 
int main()  
{
    std::thread threadObj(thread_function);
    
    // If we comment this Line, then program will crash
    ThreadRAII wrapperObj(threadObj);
    return 0;
}

