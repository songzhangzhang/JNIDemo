package example.com.jnilib;

/**
 * Created by ageren on 17/4/11.
 */

public class JNILib {
    static {
        System.loadLibrary("native-lib");
    }
    public static native String stringFromJNI();
}
