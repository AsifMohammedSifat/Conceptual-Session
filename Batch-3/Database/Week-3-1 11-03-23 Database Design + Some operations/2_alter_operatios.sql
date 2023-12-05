==================================================================================================
Add a New Column:

                        ALTER TABLE table_name
                        ADD COLUMN new_column_name datatype;

==================================================================================================
Modify Column Data Type:                    
                        ALTER TABLE table_name
                        MODIFY COLUMN existing_column_name new_datatype;
            

==================================================================================================
Drop a Column:
                          
ALTER TABLE table_name
DROP COLUMN column_name;


==================================================================================================
Rename a Table:
  
ALTER TABLE old_table_name
RENAME TO new_table_name;


==================================================================================================
Change the Default Value of a Column:
  
ALTER TABLE table_name
ALTER COLUMN column_name SET DEFAULT new_default_value;


==================================================================================================
Add a Primary Key:

ALTER TABLE table_name
ADD PRIMARY KEY (column_name);


==================================================================================================
Add a Foreign Key:
  
ALTER TABLE table_name
ADD FOREIGN KEY (column_name) REFERENCES other_table(other_column);

==================================================================================================
Modify Indexes:
  
ALTER TABLE table_name
ADD INDEX index_name (column_name);


==================================================================================================
Modify Table Engine:
  
ALTER TABLE table_name
ENGINE = InnoDB;
==================================================================================================
Change Auto-Increment Seed and Increment Values:
  
ALTER TABLE table_name
AUTO_INCREMENT = new_seed_value, AUTO_INCREMENT_INCREMENT = new_increment_value;

==================================================================================================
