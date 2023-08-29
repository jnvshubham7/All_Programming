create database p1;
CREATE TABLE admin_user (name VARCHAR2(30) NOT NULL,
	                         password VARCHAR(13) NOT NULL, 
                            email VARCHAR2(30) PRIMARY KEY,
                            mess VARCHAR2(5) NOT NULL);

CREATE TABLE student_users (rollNo VARCHAR2(30) PRIMARY KEY, 
                            password VARCHAR(13) NOT NULL, 
                            email VARCHAR2(30) NOT NULL,
                            name VARCHAR2(30) NOT NULL,
                            verified NUMBER(1,0) NOT NULL,
                            mess VARCHAR2(5) NOT NULL,
                            accountNo VARCHAR(15) NOT NULL,
                            IFSCCode VARCHAR(15) NOT NULL,
                            bankName VARCHAR(30) NOT NULL,
                            bankBranch VARCHAR(15) NOT NULL,
                            accountHolderName VARCHAR(30));

INSERT into student_users values ('IIT2017100','test','iit100','testname',0,'BH-5','testacc','testifsc','bank','branch','holder');
INSERT into student_users values ('IIT2017099','test','iit99','testname2',1,'BH-5','testacc','testifsc','bank','branch','holder');
INSERT into student_users values ('IIT2017098','test','iit98','testname3',0,'BH-5','testacc','testifsc','bank','branch','holder');
INSERT into student_users values ('IIT2017097','test','iit97','testname4',1,'BH-5','testacc','testifsc','bank','branch','holder');
INSERT into student_users values ('IIT2017096','test','iit96','testname5',0,'BH-5','testacc','testifsc','bank','branch','holder');
INSERT into student_users values ('IIT2017095','test','iit96','testname5',0,'BH-4','testacc','testifsc','bank','branch','holder');


CREATE TABLE attendence_record(rollNo VARCHAR2(30) REFERENCES student_users(rollNo),
                                currDate NUMBER(15, 0),
                                timeSlot NUMBER(1,0),
                                CONSTRAINT attendence PRIMARY KEY (rollNo, currDate, timeSlot));

insert into attendence_record values ('IIT2017100',86832,2);
insert into attendence_record values ('IIT2017100',86832,3);
insert into attendence_record values ('IIT2017100',86832,4);
insert into attendence_record values ('IIT2017100',86832,1);

CREATE TABLE feedback_record(rollNo VARCHAR2(30) REFERENCES student_users(rollNo),
                                currDate NUMBER(15, 0),
                                timeSlot NUMBER(1,0),
                                rating NUMBER(1, 0) NOT NULL,
                                complaint VARCHAR(100),
                                PRIMARY KEY (rollNo, currDate, timeSlot),
                                CONSTRAINT fk_attendence FOREIGN KEY (rollNo, currDate, timeSlot)
                                REFERENCES attendence_record(rollNo, currDate, timeSlot)); 


insert into feedback_record values ('IIT2017100',86832,2,4,'ek kaam kar yahi hagde');
insert into feedback_record values ('IIT2017100',86832,3,4,'ek kaam kar yahi hagde');
insert into feedback_record values ('IIT2017100',86832,4,4,'ek kaam kar yahi hagde');
insert into feedback_record values ('IIT2017100',86832,1,4,'ek kaam kar yahi hagde');




CREATE OR REPLACE PROCEDURE create_admin(
    
    name admin_user.name%TYPE,
    password admin_user.password%TYPE,
    email admin_user.email%TYPE,
    mess admin_user.mess%TYPE)
AS
BEGIN
    INSERT INTO admin_user VALUES (name, password, email, mess);
END;
/


select * from student_user;

CREATE OR REPLACE PROCEDURE verify_user(
    mRollNo student_users.rollNo%TYPE)
    AS
BEGIN
    UPDATE student_users SET verified = 1 WHERE rollNo =  mRollNo;
END;
/

CREATE TABLE rebate_application(rollNo VARCHAR2(30) REFERENCES student_users(rollNo), 
                                fromDate NUMBER(15, 0),
                                toDate NUMBER(15, 0),
                                accepted NUMBER(1,0),
                                PRIMARY KEY (rollNo, fromDate, toDate));

insert into rebate_application values ('IIT2017100',862832,26353,0);
insert into rebate_application values ('IIT2017097',861832,263633,0);
insert into rebate_application values ('IIT2017098',868322,26322,0);
insert into rebate_application values ('IIT2017099',868232,262253,0);

create or replace procedure accept_rebate(
    mRollNo student_users.rollNo%type,
    mFromDate rebate_application.fromDate%type,
    mToDate rebate_application.toDate%type)
    ASadd_menu('BH5', 'fixed', 'monday', 'tuesday', 'wednedsday', 'thur', 'fri','sat','sun',1)
BEGIN
    update rebate_application set accepted = 1 where rollNo = mRollNo and mFromDate = fromDate and mToDate = toDate;
END;
/

BEGIN
add_menu('BH5',
'fixed',
'mon',
'tue',
'wed',
'thur',
'fri',
'sat',
'sun',
1);
END;
/



create table day_menu (mess VARCHAR2(30),
                        weekday NUMBER(1,0),
                        timeSlot NUMBER (1,0),
                        menu VARCHAR2(200),
                        PRIMARY KEY (mess,weekday,timeSlot));

create table fixed_slot_menu (mess VARCHAR2(30),
                              timeSlot NUMBER(1,0),
                              menuDaily VARCHAR2(200),
                              PRIMARY KEY (mess,timeSlot));


CREATE OR REPLACE PROCEDURE add_menu(
    mMess day_menu.mess%TYPE,
    fixedMenu fixed_slot_menu.menuDaily%TYPE,
    mondayMenu day_menu.menu%TYPE,
    tuesdayMenu day_menu.menu%TYPE,
    wedMenu day_menu.menu%TYPE,
    thurMenu day_menu.menu%TYPE,
    friMenu day_menu.menu%TYPE,
    satMenu day_menu.menu%TYPE,
    sunMenu day_menu.menu%TYPE,
    mTimeSlot day_menu.menu%TYPE
) AS
BEGIN
    UPDATE fixed_slot_menu SET menuDaily = fixedMenu WHERE mess = mMess AND timeSlot = mTimeSlot;

    UPDATE day_menu SET menu = mondayMenu WHERE (mess = mMess AND timeSlot = mTimeSlot AND weekday = 1);
    UPDATE day_menu SET menu = tuesdayMenu WHERE (mess = mMess AND timeSlot = mTimeSlot AND weekday = 2);
    UPDATE day_menu SET menu = wedMenu WHERE (mess = mMess AND timeSlot = mTimeSlot AND weekday = 3);
    UPDATE day_menu SET menu = thurMenu WHERE (mess = mMess AND timeSlot = mTimeSlot AND weekday = 4);
    UPDATE day_menu SET menu = friMenu WHERE (mess = mMess AND timeSlot = mTimeSlot AND weekday = 5);
    UPDATE day_menu SET menu = satMenu WHERE (mess = mMess AND timeSlot = mTimeSlot AND weekday = 6);
    UPDATE day_menu SET menu = sunMenu WHERE (mess = mMess AND timeSlot = mTimeSlot AND weekday = 7);


END;
/


insert into day_menu values ('BH5',1,1,'Aalo Paratha, Dahi, Mithai');
insert into day_menu values ('BH5',2,1,'Idli Sambhar, Chutney');
insert into day_menu values ('BH5',3,1,'Sambhar, Dosa, Malai');
insert into day_menu values ('BH5',4,1,'Methi Paratha, Garam Masala');
insert into day_menu values ('BH5',5,1,'Corn FLakes, Milk, Bread');
insert into day_menu values ('BH5',6,1,'Bread, Corn flakes, DOsa, ek aur dosa');
insert into day_menu values ('BH5',7,1,'Poha Jalebi');


insert into day_menu values ('BH5',1,2,'Rajma, Chana Dal');
insert into day_menu values ('BH5',2,2,'Chola, Bhatura, Dal, Rice');
insert into day_menu values ('BH5',3,2,'Rajma, Urad Dal, Roti');



insert into day_menu values ('BH5',1,3,'Chicken, Gulaab Jamun');

insert into day_menu values ('BH5',2,3,'Rajma Chawal, Guallabe aakhein');

insert into day_menu values ('BH5',3,3,'Panner, Masala');

insert into day_menu values ('BH5',4,2,'Roti, Lauki, Butter Naan');
insert into day_menu values ('BH5',4,3,'Roti, Fried rice, Fried Daal');

insert into day_menu values ('BH5',5,2,'Rice, CUrd, Sambhar, Mixed Veg');
insert into day_menu values ('BH5',5,3,'Sabji, Roti');

insert into day_menu values ('BH5',6,2,'Chicken, Gulaab Jamun');
insert into day_menu values ('BH5',6,3,'Butter Naan, Suar ke baal');

insert into day_menu values ('BH5',7,2,'Rajma, Rice, Msala dosa');
insert into day_menu values ('BH5',7,3,'AAj ka khana reveal nahi hogi');

insert into fixed_slot_menu values ('BH5',1,'Coffee, Chai');
insert into fixed_slot_menu values ('BH5',2,'Aachar, Salad, Tatti');
insert into fixed_slot_menu values ('BH5',3,'Paneer, Roti');

CREATE TABLE poll_question(id NUMBER(10,0) PRIMARY KEY,
                            question VARCHAR2(100),
                            mess VARCHAR2(5),
                            isLive NUMBER(1,0));
                        
CREATE TABLE poll_options(pollId NUMBER(10,0) NOT NULL REFERENCES poll_question(id), 
                                optNo NUMBER(1,0) NOT NULL,
                                optionText VARCHAR2(50),
                                PRIMARY KEY (pollId, optNo));
                                
CREATE TABLE poll_responses(rollNo VARCHAR2(30) REFERENCES student_users(rollNo),
                            id NUMBER(10, 0) REFERENCES poll_question(id),
                            optNo NUMBER(1,0),
                            PRIMARY KEY (rollNo, id));

SELECT day_menu.timeSlot, weekday, day_menu.menu, fixed_slot_menu.menuDaily from fixed_slot_menu, day_menu where fixed_slot_menu.mess = 'BH5' and fixed_slot_menu.timeSLot = day_menu.timeSlot and fixed_slot_menu.timeSLot = 2;