<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
    <head><title>Real Madrid</title>
    </head>
    <body bgcolor="#E6E6FA">
        <h1 align="center"><xsl:value-of select="catalog/titl"/></h1>
        <table border="1">
            <xsl:for-each select="catalog/element">
                <xsl:sort select="titl"/>
                <xsl:sort select="pp"/>
                <h3 align="center" style="color:grey; font-style:italic"><xsl:value-of select="titl1"/></h3>
                <p><xsl:value-of select="pp"/></p>
            </xsl:for-each>
        </table>
    </body>
    </html>
</xsl:template>
</xsl:stylesheet>