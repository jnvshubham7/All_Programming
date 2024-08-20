# Understanding Lambda Expressions and Common Java Concepts

## Lambda Expressions for Handling URIs

Lambda expressions provide a concise way to represent anonymous functions in Java. For example, `uri ->` defines a function that accepts a `uri` parameter. You can use this lambda expression to handle the obtained URI effectively.

### Code Example

```java
reference.getDownloadUrl().addOnSuccessListener(uri -> {
    String downloadUrl = uri.toString(); // Convert URI to string
    System.out.println("Download URL: " + downloadUrl); // Print URL
});
```

In this example, `uri.toString()` converts the URI to a string for further use, such as displaying or processing the URL.

## Understanding `aVoid` in Lambda Expressions

`aVoid` is not a keyword but a placeholder parameter name in lambda expressions. It represents the result of an operation that returns `void`.

### Code Example

```java
database.getReference()
        .child("users")
        .child(uid)
        .setValue(user)
        .addOnSuccessListener(aVoid -> {
            System.out.println("Operation succeeded!");
        });
```

In this code, `aVoid` is used to indicate the completion of a `void` method, though it’s not utilized in the lambda body.

## RealmObject for Persistent Data Models

`RealmObject` is part of the Realm library used for object-relational mapping (ORM) in Java. It allows Java objects to be stored and retrieved from a database.

### Code Example

```java
import io.realm.RealmObject;

public class Person extends RealmObject {
    private String name;
    private int age;

    public Person() {}

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public int getAge() { return age; }
    public void setAge(int age) { this.age = age; }
}
```

Here, `Person` extends `RealmObject`, making it a persistent data model for the Realm database.

### Using RealmObject

```java
import io.realm.Realm;
import io.realm.RealmResults;

public class Main {
    public static void main(String[] args) {
        Realm.init(/* Initialize Realm in your application */);
        Realm realm = Realm.getDefaultInstance();

        Person person = new Person("John Doe", 25);
        realm.beginTransaction();
        realm.copyToRealm(person);
        realm.commitTransaction();

        RealmResults<Person> people = realm.where(Person.class).findAll();
        for (Person p : people) {
            System.out.println("Name: " + p.getName() + ", Age: " + p.getAge());
        }

        realm.close();
    }
}
```

This example demonstrates initializing Realm, saving a `Person` object, querying the database, and printing results.

## `@PrimaryKey` Annotation in Realm

The `@PrimaryKey` annotation is used in Realm to define a unique identifier for each object, ensuring uniqueness in the database.

### Code Example

```java
import io.realm.RealmObject;
import io.realm.annotations.PrimaryKey;

public class Person extends RealmObject {
    @PrimaryKey
    private String id;
    private String name;
    private int age;

    // Constructors, getters, setters, etc.
}
```

The `@PrimaryKey` annotation on the `id` field ensures each `Person` object has a unique identifier.

## Using SharedPreferences in Android

`SharedPreferences` allows for persistent key-value pair storage in Android. It is useful for saving user preferences and small amounts of data.

### Code Example

```java
SharedPreferences sharedPreferences = getSharedPreferences("MyPrefs", MODE_PRIVATE);
SharedPreferences.Editor editor = sharedPreferences.edit();
editor.putString("username", "John");
editor.putInt("age", 25);
editor.commit();

String username = sharedPreferences.getString("username", "");
int age = sharedPreferences.getInt("age", 0);
```

This example demonstrates storing and retrieving data using `SharedPreferences`.

## The `static` Keyword in Java

The `static` keyword defines class-level members that belong to the class itself rather than instances. Static members can be accessed using the class name.

### Code Example

```java
public class ExampleClass {
    private static int count; // Static variable

    public ExampleClass() {
        count++; // Increment count for each instance
    }

    public static void staticMethod() {
        System.out.println("This is a static method.");
    }

    public void instanceMethod() {
        System.out.println("This is an instance method.");
    }

    public static void main(String[] args) {
        ExampleClass.staticMethod(); // Access static method

        ExampleClass obj1 = new ExampleClass();
        ExampleClass obj2 = new ExampleClass();
        System.out.println("Number of instances created: " + ExampleClass.count);

        obj1.instanceMethod(); // Access instance method
        obj2.instanceMethod();
    }
}
```

In this example, the `count` variable and `staticMethod()` are accessed without creating instances of `ExampleClass`.

## ViewHolder Pattern in RecyclerViews

The ViewHolder pattern improves performance in RecyclerViews by caching view references, reducing expensive calls to `findViewById()`.

### Code Example

```java
public class MyAdapter extends RecyclerView.Adapter<MyAdapter.MyViewHolder> {
    private List<String> dataList;

    public MyAdapter(List<String> dataList) {
        this.dataList = dataList;
    }

    @Override
    public MyViewHolder onCreateViewHolder(ViewGroup parent, int viewType) {
        View itemView = LayoutInflater.from(parent.getContext())
                .inflate(R.layout.list_item, parent, false);
        return new MyViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(MyViewHolder holder, int position) {
        String data = dataList.get(position);
        holder.textView.setText(data);
    }

    @Override
    public int getItemCount() {
        return dataList.size();
    }

    public class MyViewHolder extends RecyclerView.ViewHolder {
        public TextView textView;

        public MyViewHolder(View itemView) {
            super(itemView);
            textView = itemView.findViewById(R.id.textView);
        }
    }
}
```

This example illustrates how the ViewHolder pattern is implemented in an adapter for a RecyclerView, improving the efficiency of view binding.