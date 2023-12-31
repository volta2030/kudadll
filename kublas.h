#include <jni.h>

// https://docs.nvidia.com/cuda/cublas/index.html

#ifdef __cplusplus
extern "C" {
#endif
	JNIEXPORT jlong JNICALL Java_kuda_Kublas_create(JNIEnv* env, jobject obj);

	JNIEXPORT jint JNICALL Java_kuda_Kublas_destroy(JNIEnv* env, jobject obj, jlong handle);

#ifdef __cplusplus
}
#endif