<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html" encoding="UTF-8" indent="yes"/>
    
    <xsl:template match="/">
        <html>
            <head>
                <title>Таблица студентов</title>
                <style>
                    table {
                        width: 50%;
                        border-collapse: collapse;
                        margin: 20px auto;
                    }
                    th, td {
                        border: 2px solid black;
                        padding: 10px;
                        text-align: center;
                    }
                    th {
                        background-color:rgb(26, 155, 219);
                    }
                </style>
            </head>
            <body>
                <h1 style="text-align: center;">Итоговая аттестация</h1>
                <table>
                    <thead>
                        <tr>
                            <th>Имя, фамилия</th>
                            <th>Оценка</th>
                        </tr>
                    </thead>
                    <tbody>
                        <xsl:for-each select="students/student">
                            <xsl:sort select="grade"/>
                            <tr>  
                                <xsl:choose>
                                    <xsl:when test="grade &gt;=1 and grade &lt;=4 ">
                                    <td><xsl:value-of select="name"/></td>
                                    <td bgcolor="red"><xsl:value-of select="grade"/></td>
                                    </xsl:when>
                                    <xsl:when test="grade &gt;=8 and grade &lt;= 9">
                                    <td><xsl:value-of select="name"/></td>
                                    <td bgcolor="green"><xsl:value-of select="grade"/></td>
                                    </xsl:when>
                          
                                    <td><xsl:value-of select="name"/></td>
                                    <td><xsl:value-of select="grade"/></td>
                                </xsl:choose>
   
                            </tr>
                        </xsl:for-each>
                    </tbody>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>