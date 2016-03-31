//
// Created by Liza Linto on 3/31/16.
//

#include "jni_hello.h"
#include "jni.h"

JNIEXPORT jstring JNICALL
Java_com_example_lizalinto_myfirstndkapp_MainActivity_requestJNISting(JNIEnv *env,
                                                                      jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "Hello from JNI! "MYFIRSTNDKAPP_JNI_HELLO_H);
}