## USER
All symbols which are used in ER Diagram.

## ASSISTANT
Entity-Relationship (ER) diagrams use various symbols to represent different components and relationships within a database model. Here are the common symbols used in ER diagrams:

1. **Entity:**
   - **Symbol:** Rectangle
   - **Description:** Represents an entity, which is a real-world object or concept that can be uniquely identified and has attributes.

2. **Attribute:**
   - **Symbol:** Ellipse (inside the entity rectangle)
   - **Description:** Represents a property or characteristic of an entity. Attributes are written inside ellipses connected to the entity.

3. **Primary Key:**
   - **Symbol:** Underlined attribute
   - **Description:** Denotes the attribute or combination of attributes that uniquely identifies each instance of an entity. The underlining indicates the primary key.

4. **Multivalued Attribute:**
   - **Symbol:** Double ellipse
   - **Description:** Indicates an attribute that can have multiple values for a single entity.

5. **Derived Attribute:**
   - **Symbol:** Dashed ellipse
   - **Description:** Denotes an attribute whose value is derived from other attributes in the database rather than being stored explicitly.

6. **Relationship:**
   - **Symbol:** Diamond shape connecting two entities
   - **Description:** Represents an association between two entities. The diamond contains the relationship name.

7. **Cardinality:**
   - **Symbol:** Lines or notches on the connecting lines
   - **Description:** Indicates the number of instances of one entity that can be related to a single instance of the other entity. Common notations include "1" (one), "M" (many), or specific numerical values.

8. **Participation Constraint:**
   - **Symbol:** Double line connecting the entity to the relationship
   - **Description:** Indicates whether every instance of an entity must participate in the relationship. Double lines represent total participation; a single line indicates partial participation.

9. **Weak Entity:**
   - **Symbol:** Double rectangle
   - **Description:** Represents a weak entity, which does not have a primary key attribute on its own and relies on a relationship with another entity for identification.

10. **Association or Link:**
    - **Symbol:** Line connecting entities
    - **Description:** Represents a general association between entities. The line may or may not have a relationship name.

11. **Recursive Relationship:**
    - **Symbol:** Loop back to the same entity
    - **Description:** Represents a relationship between instances of the same entity type.

12. **ISA (Inheritance):**
    - **Symbol:** Triangle
    - **Description:** Represents the specialization/generalization relationship, indicating that one entity is a subtype of another.

These symbols help visualize the structure and relationships in a database model, making it easier to design and understand the database schema. Keep in mind that conventions can vary, and different notations might use slightly different symbols or representations.