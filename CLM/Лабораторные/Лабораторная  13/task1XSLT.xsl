<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html" encoding="UTF-8" indent="yes"/>
    
    <xsl:template match="/">
        <html>
            <head>
                <title>Сортировка товаров по цене</title>
                <style>
                    table {
                        width: 50%;
                        border-collapse: collapse;
                        margin: 20px auto;
                    }
                    th, td {
                        border: 1px solid black;
                        padding: 8px;
                        font-size: 20px;
                        text-align: center;
                    }
                    th {
                        background-color: rgb(255, 179, 0);
                    }
                </style>
            </head>
            <body>
                <h1 style="text-align: center; text-decoration: underline; color: orange;">DNS</h1>
                <table>
                    <thead>
                        <tr>
                            <th>Товар</th>
                            <th>Цена в $</th>
                        </tr>
                    </thead>
                    <tbody>
                        <xsl:for-each select="store/item">
                            <xsl:sort select="number(price)" order="ascending"/>
                            <tr>
                                <td><xsl:value-of select="name"/></td>
                                <td><xsl:value-of select="number(price)"/></td>
                            </tr>
                        </xsl:for-each>
                    </tbody>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>
