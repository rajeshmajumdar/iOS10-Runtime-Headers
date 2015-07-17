/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCXmlStreamWriter : NSObject {
    NSMutableSet * mAddedIds;
    BOOL  mContentAdded;
    unsigned int  mCurrentDepth;
    struct _xmlTextWriter { } * mStreamAPI;
}

+ (BOOL)cleanUpXmlTextWriter:(struct _xmlTextWriter { }*)arg1;
+ (struct _xmlTextWriter { }*)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(BOOL)arg3;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithBuffer:(struct _xmlOutputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuf {} *x5; struct _xmlBuf {} *x6; int x7; int x8; }*)arg1;
+ (struct _xmlTextWriter { }*)createXmlTextWriterWithContext:(id)arg1;
+ (BOOL)endElementInStream:(struct _xmlTextWriter { }*)arg1;
+ (void)resetElementIds;
+ (BOOL)startElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
+ (BOOL)startPlainElementInStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (BOOL)writeAnchorTargetToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2;
+ (BOOL)writeAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
+ (BOOL)writeDtdToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;
+ (BOOL)writeNamespaceToStream:(struct _xmlTextWriter { }*)arg1 prefix:(id)arg2 uri:(const char *)arg3;
+ (BOOL)writePlainAttributeToStream:(struct _xmlTextWriter { }*)arg1 name:(id)arg2 content:(id)arg3;
+ (BOOL)writeStringToStream:(struct _xmlTextWriter { }*)arg1 text:(id)arg2;

- (BOOL)contentAdded;
- (void)dealloc;
- (BOOL)endElement;
- (BOOL)endElementsToBase;
- (id)initWithTextWriter:(struct _xmlTextWriter { }*)arg1;
- (BOOL)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;
- (BOOL)startPlainElement:(id)arg1;
- (struct _xmlTextWriter { }*)textWriter;
- (BOOL)writeAnchorTarget:(id)arg1;
- (BOOL)writeAttribute:(id)arg1 boolContent:(BOOL)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
- (BOOL)writeAttribute:(id)arg1 intContent:(long)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;
- (BOOL)writeElementId:(id)arg1;
- (BOOL)writeNamespace:(id)arg1 uri:(const char *)arg2;
- (BOOL)writePlainAttribute:(id)arg1 boolContent:(BOOL)arg2;
- (BOOL)writePlainAttribute:(id)arg1 content:(id)arg2;
- (BOOL)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;
- (BOOL)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (BOOL)writePlainAttribute:(id)arg1 intContent:(long)arg2;
- (BOOL)writeString:(id)arg1;

@end
