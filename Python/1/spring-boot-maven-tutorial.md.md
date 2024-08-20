Here is the rewritten article in point-wise format with code and examples:

**Step-by-Step Guide to Running a Spring Boot Application in VS Code**

### 1. Open Project in VS Code

* Open VS Code.
* Use `File -> Open Folder...` to open the root directory of your project (where the `pom.xml` file is located).

### 2. Ensure Maven is Installed

* Make sure Maven is installed on your system.
* You can check by running `mvn -v` in your terminal. If Maven is not installed, download and install it from the [Maven website](https://maven.apache.org/download.cgi).

### 3. Import Maven Project

* In VS Code, open the command palette (`Ctrl+Shift+P`).
* Type `Java: Import Maven Projects` and select your `pom.xml`.

### 4. Build the Project

* Open the terminal in VS Code.
* Navigate to your project's root directory (where `pom.xml` is located).
* Run the command: `mvn clean install`. This will build the project and download the necessary dependencies.

### 5. Run the Application

* In VS Code, open the `ChatsAppNotificationApplication.java` file.
* Right-click on the file and select `Run Java`.
* Alternatively, you can run your Spring Boot application directly from the terminal:
```bash
mvn spring-boot:run
```

### Resolving Issues with Maven

If you encounter issues with Maven, here are some steps to resolve them:

### 1. Check Internet Connection

* Ensure that your internet connection is stable and you can access external repositories like `https://repo.spring.io/snapshot` without any issues.

### 2. Update Maven Repository

* Sometimes, the repository server may be down or experiencing issues. Try updating your Maven repository by running the following command:
```bash
mvn clean install -U
```

### 3. Verify Repository URL

* Double-check the repository URLs specified in your `pom.xml` file. Make sure they are correct and accessible.

### 4. Clear Local Maven Repository Cache

* It's possible that there could be a corrupt or incomplete artifact in your local Maven repository cache. You can try clearing the cache by deleting the contents of the `.m2/repository` directory in your user home directory.

### 5. Check Proxy Settings

* If you're behind a proxy server, ensure that Maven is configured to use the correct proxy settings. You may need to configure Maven's `settings.xml` file with proxy configuration details.

### 6. Review `pom.xml` Configuration

* Ensure that the `<parent>` section in your `pom.xml` file is correctly configured with the appropriate `groupId`, `artifactId`, and `version` for the Spring Boot parent POM.

### Correcting `pom.xml` Configuration

Here is an example of how to correct the `pom.xml` file:
```xml
<parent>
    <groupId>org.springframework.boot</groupId>
    <artifactId>spring-boot-starter-parent</artifactId>
    <version>2.7.0</version>
    <relativePath/> <!-- lookup parent from repository -->
</parent>
```

### Troubleshooting Spring Boot Application

If you encounter issues with your Spring Boot application, here are some steps to troubleshoot them:

### 1. Check Network Connection

* Ensure that your internet connection is stable and that there are no firewall or proxy issues preventing Maven from accessing the internet.

### 2. Try Again

* Sometimes network issues are temporary. You can try building your project again after some time to see if the issue resolves itself.

### 3. Update Maven Repositories

* Force Maven to update its local repository cache by running the following command:
```bash
mvn clean install -U
```

### 4. Proxy Configuration

* If you are behind a corporate firewall or using a proxy, you may need to configure Maven to use the proxy settings. You can do this by adding proxy configuration to your `settings.xml` file:
```xml
<proxies>
    <proxy>
        <id>example-proxy</id>
        <active>true</active>
        <protocol>http</protocol>
        <host>proxy.example.com</host>
        <port>8080</port>
        <!-- Add nonProxyHosts if needed -->
    </proxy>
</proxies>
```
Replace `proxy.example.com` and `8080` with your proxy host and port.