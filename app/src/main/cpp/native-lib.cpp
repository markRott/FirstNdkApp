#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_sma_firstndkapp_MainActivity_stringFromJNI(JNIEnv *env, jobject) {
    std::string hello = "Hello from native-lib.cpp";
    return env->NewStringUTF(hello.c_str());

}

extern "C"
jstring
Java_com_example_sma_firstndkapp_MainActivity_myCustomString(JNIEnv *env, jobject) {

    std::string hello = "Hello from my custom method";
    return env->NewStringUTF(hello.c_str());
}
