/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_Particle */

#ifndef _Included_com_mousebird_maply_Particle
#define _Included_com_mousebird_maply_Particle
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_Particle
 * Method:    setLoc
 * Signature: (Lcom/mousebird/maply/Point3d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Particle_setLoc
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_Particle
 * Method:    setColor
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Particle_setColor
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_mousebird_maply_Particle
 * Method:    setVelocity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Particle_setVelocity
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_mousebird_maply_Particle
 * Method:    setExpiration
 * Signature: (D)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Particle_setExpiration
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_mousebird_maply_Particle
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Particle_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_Particle
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Particle_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_Particle
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_Particle_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
