#-*- coding:utf8 -*-

#----------------------------------------------
#                Code header
#----------------------------------------------

__author__ = "Muse"
__creation_time__ = "2016.01.25 23:45"
__modification_time__ = "2016.05.07 20:30"
__intro__ = "It just a mysql client"


#----------------------------------------------
#            Data control config 
#----------------------------------------------

UserName = "root"
UserPassword = "WdSr0922"


#----------------------------------------------
#            database sql define 
#----------------------------------------------

# create field, like  
CreateSql = {
    1: ["", "News.Example"],
}

# field, tablename
SelectSql = {
    0: ["*", ""],
    1: ["*", "State = 0"],

    2: ["*", "Keyflags = 0"],
    3: ["*", "Word like \"%s%%\" and Len = %d"],
    4: ["*", "Word = \"%s\""],
    5: ["Ind, Keyword", "Keyword like \"%%%s%%\""],
    6: ["Title, Url, Content", "Ind = \"%s\""],
}

# field, insert format
InsertSql = {
    0: ["", "\"%s\", \"%d\", \"%d\""],
    1: [u"Ind, Time, Source, Title, Url, Content",\
        "\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\""]
}

# update data, condition
UpdateSql = {
    1: [u"State = %d", "ID = %d"],

    # relator
    2: [u"Keyflags = %d", "Ind = \"%s\""],
}

# delete condition
DeleteSql = {
    0:  "Word = \"%s\"",
}
