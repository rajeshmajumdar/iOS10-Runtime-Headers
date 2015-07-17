/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderEffects : NSObject {
    NSArray * mCacheList;
    NSMutableArray * mSections;
}

@property (nonatomic, readonly) NSSet *identifier;

- (void)addEffect:(id)arg1;
- (void)addEffect:(id)arg1 toSection:(int)arg2;
- (void)addEffectOnce:(id)arg1 toSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1;
- (void)addEffectsFromArray:(id)arg1 toSection:(int)arg2;
- (void)addVariables:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)effects;
- (void)enumerateEffectsUsingBlock:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (void)inject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSectionEnabled:(int)arg1;
- (void)prependEffect:(id)arg1;
- (void)prependEffect:(id)arg1 toSection:(int)arg2;
- (void)removeEffect:(id)arg1 fromSection:(int)arg2;
- (BOOL)removeEffectOfClass:(Class)arg1 fromSection:(int)arg2;
- (void)reset;
- (void)resetCacheList;
- (void)resetSection:(int)arg1;
- (void)resetSection:(int)arg1 toArray:(id)arg2;
- (void)resetToArray:(id)arg1;
- (void)setEnable:(BOOL)arg1 forSection:(int)arg2;

@end
