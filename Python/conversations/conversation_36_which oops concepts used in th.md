## USER
which oops concepts used in this 




package com.reeyanto.antaranews.models;

public class Post {

    String link, title, pubDate, description, thumbnail;

    public Post(String link, String title, String pubDate, String description, String thumbnail) {
        this.link = link;
        this.title = title;
        this.pubDate = pubDate;
        this.description = description;
        this.thumbnail = thumbnail;
    }

    public String getLink() {
        return link;
    }

    public String getTitle() {
        return title;
    }

    public String getPubDate() {
        return pubDate;
    }

    public String getDescription() {
        return description;
    }

    public String getThumbnail() {
        return thumbnail;
    }
}


## ASSISTANT
The provided Java code represents a simple class named `Post` in the context of an Android application, and it incorporates several Object-Oriented Programming (OOP) concepts. Here are the OOP concepts used in this code:

1. **Class:**
   - The code defines a class named `Post`.

2. **Object:**
   - Instances of the `Post` class are created when you use the `new` keyword to instantiate objects. For example:
     ```java
     Post myPost = new Post(link, title, pubDate, description, thumbnail);
     ```

3. **Constructor:**
   - The class has a constructor that initializes the object's state when it is created. The constructor takes parameters (`link`, `title`, `pubDate`, `description`, and `thumbnail`) and assigns them to the corresponding instance variables.

4. **Encapsulation:**
   - The class encapsulates its data by declaring instance variables (`link`, `title`, `pubDate`, `description`, `thumbnail`) as private and providing public methods (`getLink()`, `getTitle()`, `getPubDate()`, `getDescription()`, `getThumbnail()`) to access these variables. This ensures that the internal state of the `Post` object is accessed and modified through well-defined methods.

5. **Getter Methods:**
   - Getter methods (`getLink()`, `getTitle()`, `getPubDate()`, `getDescription()`, `getThumbnail()`) are used to retrieve the values of private instance variables. This promotes data encapsulation by providing controlled access to the internal state.

6. **Immutable Object:**
   - The `Post` class is designed to be immutable because it does not provide setter methods to modify the values of its instance variables after the object is created. The state of the object is set through the constructor, and the values cannot be changed later.

Overall, the `Post` class demonstrates key OOP principles such as encapsulation, constructors, and the use of getter methods to provide controlled access to the internal state of the object. This is a common practice in designing Java classes, especially for representing data structures or entities in an application.