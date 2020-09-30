//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1URTConversationMediatorDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, T1ConversationNode, T1ConversationStatusNode, T1URTConversationMediator, T1URTTimelineTombstoneItemViewModel, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext;
@protocol T1ConversationDataSourceDelegate;

@interface T1ConversationDataSource : NSObject <T1URTConversationMediatorDelegate>
{
    _Bool _initialPopulationHasCompleted;
    _Bool _initialSelectedStatusHasBeenSet;
    _Bool _conversationEmphasizedConnectorLinesEnabled;
    _Bool _connectorEmphasisDirectAncestorOnly;
    _Bool _connectorEmphasisDirectDescendentsOnly;
    id <T1ConversationDataSourceDelegate> _delegate;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterStatus *_timelineRootStatus;
    T1ConversationNode *_rootNode;
    NSMutableDictionary *_supplementalStatuses;
    NSMutableSet *_composedStatusIDs;
    T1ConversationStatusNode *_lastStatusAddedToConversationFromComposer;
    T1ConversationStatusNode *_focalStatusNode;
    TFNTwitterStatus *_timelineFocalStatus;
    T1URTTimelineTombstoneItemViewModel *_timelineFocalTombstone;
    NSString *_selectedNodeEntryID;
    long long _overflowCount;
    TFNTwitterStatus *_focalStatus;
    NSString *_focalEntryID;
    T1URTConversationMediator *_urtMediator;
    NSMutableDictionary *_statusIDToEntryIDCache;
    NSMutableDictionary *_nodeCache;
    NSArray *_cachedFlattenedNodeTreeNodes;
    NSMutableSet *_orphanNodes;
    NSMutableSet *_moderatedEntryIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool connectorEmphasisDirectDescendentsOnly; // @synthesize connectorEmphasisDirectDescendentsOnly=_connectorEmphasisDirectDescendentsOnly;
@property(readonly, nonatomic) _Bool connectorEmphasisDirectAncestorOnly; // @synthesize connectorEmphasisDirectAncestorOnly=_connectorEmphasisDirectAncestorOnly;
@property(readonly, nonatomic) _Bool conversationEmphasizedConnectorLinesEnabled; // @synthesize conversationEmphasizedConnectorLinesEnabled=_conversationEmphasizedConnectorLinesEnabled;
@property(retain, nonatomic) NSMutableSet *moderatedEntryIDs; // @synthesize moderatedEntryIDs=_moderatedEntryIDs;
@property(retain, nonatomic) NSMutableSet *orphanNodes; // @synthesize orphanNodes=_orphanNodes;
@property(retain, nonatomic) NSArray *cachedFlattenedNodeTreeNodes; // @synthesize cachedFlattenedNodeTreeNodes=_cachedFlattenedNodeTreeNodes;
@property(retain, nonatomic) NSMutableDictionary *nodeCache; // @synthesize nodeCache=_nodeCache;
@property(retain, nonatomic) NSMutableDictionary *statusIDToEntryIDCache; // @synthesize statusIDToEntryIDCache=_statusIDToEntryIDCache;
@property(nonatomic) _Bool initialSelectedStatusHasBeenSet; // @synthesize initialSelectedStatusHasBeenSet=_initialSelectedStatusHasBeenSet;
@property(retain, nonatomic) T1URTConversationMediator *urtMediator; // @synthesize urtMediator=_urtMediator;
@property(copy, nonatomic) NSString *focalEntryID; // @synthesize focalEntryID=_focalEntryID;
@property(retain, nonatomic) TFNTwitterStatus *focalStatus; // @synthesize focalStatus=_focalStatus;
@property(nonatomic) _Bool initialPopulationHasCompleted; // @synthesize initialPopulationHasCompleted=_initialPopulationHasCompleted;
@property(readonly, nonatomic) long long overflowCount; // @synthesize overflowCount=_overflowCount;
@property(copy, nonatomic) NSString *selectedNodeEntryID; // @synthesize selectedNodeEntryID=_selectedNodeEntryID;
@property(retain, nonatomic) T1URTTimelineTombstoneItemViewModel *timelineFocalTombstone; // @synthesize timelineFocalTombstone=_timelineFocalTombstone;
@property(retain, nonatomic) TFNTwitterStatus *timelineFocalStatus; // @synthesize timelineFocalStatus=_timelineFocalStatus;
@property(retain, nonatomic) T1ConversationStatusNode *focalStatusNode; // @synthesize focalStatusNode=_focalStatusNode;
@property(readonly, nonatomic) T1ConversationStatusNode *lastStatusAddedToConversationFromComposer; // @synthesize lastStatusAddedToConversationFromComposer=_lastStatusAddedToConversationFromComposer;
@property(readonly, nonatomic) T1ConversationNode *rootNode; // @synthesize rootNode=_rootNode;
@property(readonly, nonatomic) TFNTwitterStatus *timelineRootStatus; // @synthesize timelineRootStatus=_timelineRootStatus;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1ConversationDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_computeConversationSections:(id)arg1;
- (void)_t1_copyScribingParametersFromNode:(id)arg1 toNode:(id)arg2;
- (void)unsetScribeAdditions;
- (void)updateScribeAdditions;
@property(readonly, nonatomic) T1ConversationStatusNode *selectedNode;
- (void)_t1_replaceNode:(id)arg1 withNode:(id)arg2;
- (void)revealStatusForTombstoneNode:(id)arg1;
- (void)_t1_convertStatusNode:(id)arg1 toTombstone:(id)arg2;
- (void)insertTombstoneForStatus:(id)arg1;
- (void)_t1_addNodeToCache:(id)arg1;
- (id)_t1_generateAndInsertNodeForWrappedItem:(id)arg1;
- (id)_t1_lazyGeneratedNodeForWrappedItem:(id)arg1;
- (void)_t1_removeNodeFromCache:(id)arg1;
- (id)entryIDForStatusID:(long long)arg1;
- (id)nodeForStatusID:(long long)arg1;
- (id)nodeForEntryID:(id)arg1;
- (id)_t1_entryIDForNodeConnectedToSelectedStatus:(id)arg1;
- (id)_t1_entryIDsForNodesDescendingFromNode:(id)arg1;
@property(readonly, nonatomic) NSArray *entryIDsForSelectedStatusAncestors;
@property(readonly, nonatomic) NSArray *entryIDsForSelectedStatusDescendents;
- (void)_t1_setVisibleSiblingConnectorLevels:(id)arg1 entryIDs:(id)arg2 forNode:(id)arg3;
- (id)_t1_connectorLevelForNode:(id)arg1;
- (void)_t1_trimSucceedingNodes:(id)arg1 upToLevel:(long long)arg2;
- (void)_t1_calculateVisibleConnectorsForConversation:(id)arg1;
- (_Bool)shouldShowAncestorHighlightingAtLevel:(unsigned long long)arg1 forNode:(id)arg2;
- (_Bool)shouldShowParentHighlightingForNode:(id)arg1;
- (long long)focalStatusID;
- (void)nodeChildVisibilityChanged:(id)arg1;
- (void)completedRenderingForUpdate;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)_t1_flattenedCompositionChainForNode:(id)arg1;
- (id)flattenedNodeTreeNodes;
@property(readonly, nonatomic) _Bool shouldAssertOnDuplicateItems;
- (void)urtConversationMediatorDidRecieveError:(id)arg1;
- (void)urtConversationMediatorDidUpdate:(id)arg1;
- (void)_t1_notifyDelegate;
- (void)_t1_didUpdateTree;
- (void)errorItemTapped:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading;
- (_Bool)cursorIsLoading:(id)arg1;
- (_Bool)loadMoreAncestorsIfNeeded;
@property(readonly, nonatomic) _Bool isLoadingAncestors;
@property(readonly, nonatomic) _Bool mayHaveAncestors;
- (void)loadMoreDescendantsIfNeeded;
@property(readonly, nonatomic) _Bool isLoadingDescendants;
@property(readonly, nonatomic) _Bool mayHaveDescendants;
- (void)loadChildrenFromShowMoreNode:(id)arg1 fromScroll:(_Bool)arg2;
- (void)loadChildrenFromShowMoreNode:(id)arg1;
- (void)didShowLastHiddenReply;
- (void)showReply:(id)arg1;
- (void)hideReply:(id)arg1;
@property(readonly, nonatomic) _Bool hasModeratedReplies;
- (void)_t1_untrackModeratedEntryID:(id)arg1;
- (void)_t1_trackModeratedEntryID:(id)arg1;
- (void)removeStatusWithIDFromConversation:(long long)arg1;
- (_Bool)_t1_shouldIndentClientComposedNodeFromParent:(id)arg1;
- (void)addStatusToConversation:(id)arg1;
- (id)_t1_composedRepliesToNode:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *composedStatusIDs; // @synthesize composedStatusIDs=_composedStatusIDs;
@property(readonly, nonatomic) NSMutableDictionary *supplementalStatuses; // @synthesize supplementalStatuses=_supplementalStatuses;
- (id)initWithAccount:(id)arg1 focalStatus:(id)arg2 scribeContext:(id)arg3 referrer:(id)arg4 controllerData:(id)arg5 overflowCount:(long long)arg6;
- (id)initWithAccount:(id)arg1 focalStatus:(id)arg2 scribeContext:(id)arg3 mediator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

