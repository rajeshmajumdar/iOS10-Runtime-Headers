/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnnotationAuthorStorage : TSPObject {
    NSMutableSet * mAuthors;
}

@property (nonatomic, readonly) NSSet *authors;

- (void)addAuthor:(id)arg1;
- (id)authorWithName:(id)arg1;
- (id)authors;
- (id)currentAuthorColorWithAuthorName:(id)arg1;
- (void)dealloc;
- (unsigned int)delayedArchivingPriority;
- (id)description;
- (void)didAddAuthorRelationshipToDocument;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (void)didRemoveAuthorRelationshipFromDocument;
- (int)indexForColorKey:(id)arg1 usedColors:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)nextAuthorColor;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(BOOL)arg2;
- (int)p_hashCodeForColorKey:(id)arg1;
- (BOOL)p_withToleranceDoesColorSet:(id)arg1 containColor:(id)arg2;
- (id)packageLocator;
- (void)removeAuthor:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)shouldDelayArchiving;

@end
