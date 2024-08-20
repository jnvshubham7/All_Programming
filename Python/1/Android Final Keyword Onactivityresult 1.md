**Android Development: Understanding Final Keyword and onActivityResult Method**

**Introduction**

Android development involves a range of concepts, from working with activities and intents to managing variables and classes. In this article, we will explore the `final` keyword and the `onActivityResult` method in Android programming.

**What is the Final Keyword?**

The `final` keyword is used to declare a constant or to make a variable, method, or class unmodifiable. Once a variable, method, or class is declared as `final`, its value or implementation cannot be changed.

**Examples of Final Keyword**

1. **Constant Variable**

```java
final int MAX_VALUE = 10;
```

2. **Method**

```java
public class MyClass {
    public final void myMethod() {
        // Method implementation
    }
}
```

3. **Class**

```java
public final class MyFinalClass {
    // Class implementation
}
```

4. **Local Variable**

```java
public void myMethod() {
    final int localVar = 5;
    // Rest of the code
}
```

**onActivityResult Method**

The `onActivityResult` method is used to get the result back from an activity. When an activity is started, it can send back a result to the starting activity. This is achieved by using the `setResult` method and calling `finish()` in the activity that is sending the result.

```java
public class ActivityB extends AppCompatActivity {
    // ...

    public void returnResult() {
        Intent resultIntent = new Intent();
        resultIntent.putExtra("result", "Hello from Activity B");
        setResult(RESULT_OK, resultIntent);
        finish();
    }
}
```

When `ActivityB` finishes, the `onActivityResult` method in `ActivityA` is called. The `requestCode` allows you to determine which activity the result is coming from, and the `resultCode` tells you whether the result is successful or canceled. You can then extract any data from the `Intent` using the provided key.

**Conclusion**

In this article, we have discussed the `final` keyword and the `onActivityResult` method in Android programming. We have also provided examples of how to use the `final` keyword to declare constants, methods, and classes. By understanding these concepts, developers can improve their skills in Android development.