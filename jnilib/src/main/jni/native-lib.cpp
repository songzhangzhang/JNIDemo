#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_example_com_jnilib_JNILib_stringFromJNI(JNIEnv *env, jclass type) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

//extern "C"
//JNIEXPORT jstring JNICALL
//Java_example_com_jnidemo1_MainActivity_stringFromJNI(
//        JNIEnv* env,
//        jobject /* this */) {
//    std::string hello = "Hello from C++";
//    return env->NewStringUTF(hello.c_str());
//}
