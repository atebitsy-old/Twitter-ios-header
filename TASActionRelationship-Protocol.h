//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSOperation, NSPredicate;
@protocol TASAction;

@protocol TASActionRelationship
- (void)applyRelationshipToAction:(id <TASAction>)arg1 operation:(NSOperation *)arg2 owningAction:(id <TASAction>)arg3 owningOperation:(NSOperation *)arg4;
@property(nonatomic, readonly) NSPredicate *relationshipTargetPredicate;
@end

