//
// Created by sma on 11.11.16.
//
#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_sma_firstndkapp_MainActivity_getStringFromCustomLib(JNIEnv *env, jobject) {

    std::string hello = "Hello from my custom FILE method";
    return env->NewStringUTF(hello.c_str());
}

