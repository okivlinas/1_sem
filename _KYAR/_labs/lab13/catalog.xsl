<?xml version="1.0" encoding="UTF-8"?> 
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"> 
 <xsl:template match="/"> 
   <html> 
<head><title></title> 
</head> 
   <body> 
   <h2>Аттестация студентов</h2> 
   <table border="1"> 
     <tr bgcolor="#9acd32"> 
       <th>Фамилия</th> 
       <th>КЯР</th>
       <th>ОПИ</th>
       <th>ОАП</th>
       <th>АЛОЦВМ</th> 
     </tr> 
     <xsl:for-each select="catalog/cd"> 
      <xsl:sort select="students" order="descending"/> 
       <tr> 
         <td><xsl:value-of select="students"/></td> 
         <!-- КЯР-->
    <xsl:choose> 
    <xsl:when test="m1 &gt; 8"> 
           <td bgcolor="green"> 
           <xsl:value-of select="m1"/></td> 
    </xsl:when> 
    <xsl:otherwise> 
        <xsl:choose> 
            <xsl:when test="m1 &lt; 4"> 
                <td bgcolor="red"> 
                <xsl:value-of select="m1"/></td> 
            </xsl:when> 
    <xsl:otherwise> 
        <td><xsl:value-of select="m1"/></td> 
        </xsl:otherwise> 
            </xsl:choose> 
        </xsl:otherwise> 
    </xsl:choose> 
     <!--ОПИ-->
     <xsl:choose> 
        <xsl:when test="m2 &gt; 8"> 
               <td bgcolor="green"> 
               <xsl:value-of select="m2"/></td> 
        </xsl:when> 
        <xsl:otherwise> 
            <xsl:choose> 
                <xsl:when test="m2 &lt; 4"> 
                    <td bgcolor="red"> 
                    <xsl:value-of select="m2"/></td> 
                </xsl:when> 
        <xsl:otherwise> 
            <td><xsl:value-of select="m2"/></td> 
            </xsl:otherwise> 
                </xsl:choose> 
            </xsl:otherwise> 
        </xsl:choose>  
    <!--ОАП-->
    <xsl:choose> 
    <xsl:when test="m3 &gt; 8"> 
           <td bgcolor="green"> 
           <xsl:value-of select="m3"/></td> 
    </xsl:when> 
    <xsl:otherwise> 
                 <xsl:choose> 
         <xsl:when test="m3 &lt; 4"> 
           <td bgcolor="red"> 
           <xsl:value-of select="m3"/></td> 
        </xsl:when> 
         <xsl:otherwise> 
           <td><xsl:value-of select="m3"/></td> 
        </xsl:otherwise> 
            </xsl:choose> 
        </xsl:otherwise> 
    </xsl:choose> 
    <!--АЛОЦВМ-->
    <xsl:choose> 
    <xsl:when test="m4 &gt; 8"> 
           <td bgcolor="green"> 
           <xsl:value-of select="m4"/></td> 
    </xsl:when> 
    <xsl:otherwise> 
                 <xsl:choose> 
         <xsl:when test="m4 &lt; 4"> 
           <td bgcolor="red"> 
           <xsl:value-of select="m4"/></td> 
        </xsl:when> 
         <xsl:otherwise> 
           <td><xsl:value-of select="m4"/></td> 
        </xsl:otherwise> 
            </xsl:choose> 
        </xsl:otherwise> 
    </xsl:choose> 
       </tr> 
     </xsl:for-each> 
   </table> 
   </body> 
   </html> 
 </xsl:template> 
</xsl:stylesheet> 