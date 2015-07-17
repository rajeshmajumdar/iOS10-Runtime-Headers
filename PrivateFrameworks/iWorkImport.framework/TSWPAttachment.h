/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPAttachment : TSPObject <TSDOwningAttachment, TSKDocumentObject, TSPCopying> {
    TSWPStorage * _parentStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isAnchored;
@property (nonatomic, readonly) BOOL isAttachedToBodyText;
@property (nonatomic, readonly) BOOL isDrawable;
@property (nonatomic, readonly) BOOL isPartitioned;
@property (nonatomic, readonly) BOOL isSearchable;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, readonly) Class positionerClass;
@property (nonatomic, readonly) BOOL specifiesEnabledKnobMask;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (int)attributeArrayKind;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)changesWithPageCount;
- (BOOL)changesWithPageNumber;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (unsigned int)findCharIndex;
- (void)infoChanged;
- (id)initWithContext:(id)arg1;
- (BOOL)isAnchored;
- (BOOL)isAttachedToBodyText;
- (BOOL)isDrawable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPartitioned;
- (BOOL)isSearchable;
- (void)migrateStyleWithDocumentRoot:(id)arg1;
- (id)objectsForStyleMigrating;
- (id)parentStorage;
- (Class)positionerClass;
- (void)setParentStorage:(id)arg1;
- (BOOL)specifiesEnabledKnobMask;
- (BOOL)supportsUUID;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
