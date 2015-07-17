/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKGraph : NSObject {
    NSMutableArray * _nodes;
}

@property (nonatomic, readonly) NSArray *nodes;

+ (id)graph;
+ (id)graphWithNodes:(id)arg1;

- (void).cxx_destruct;
- (void)addNodes:(id)arg1;
- (void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2;
- (id)findPathFromNode:(id)arg1 toNode:(id)arg2;
- (id)init;
- (id)initWithNodes:(id)arg1;
- (id)nodes;
- (id)nodesMut;
- (void)removeNodes:(id)arg1;

@end
