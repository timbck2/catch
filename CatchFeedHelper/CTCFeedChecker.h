#import <Foundation/Foundation.h>


@protocol CTCFeedCheck

- (void)checkShowRSSFeed:(NSURL *)feedURL
       downloadingToPath:(NSString *)downloadFolderPath
      organizingByFolder:(BOOL)shouldOrganizeByFolder
            skippingURLs:(NSArray *)previouslyDownloadedURLs
               withReply:(void (^)(NSError *error))reply;

@end


@interface CTCFeedChecker : NSObject <CTCFeedCheck, NSXPCListenerDelegate>

+ (instancetype)sharedChecker;

@end