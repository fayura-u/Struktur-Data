# [GitHub Stats Visualization](https://github.com/fayura-u/github-stats)

<!--
https://github.community/t/support-theme-context-for-images-in-light-vs-dark-mode/147981/84
-->
<a href="https://github.com/fayura-u/github-stats">
<img src="https://github.com/fayura-u/github-stats/blob/master/generated/overview.svg#gh-dark-mode-only" />
<img src="https://github.com/fayura-u/github-stats/blob/master/generated/languages.svg#gh-dark-mode-only" />
<img src="https://github.com/fayura-u/github-stats/blob/master/generated/overview.svg#gh-light-mode-only" />
<img src="https://github.com/fayura-u/github-stats/blob/master/generated/languages.svg#gh-light-mode-only" />
</a>

Generate visualizations of GitHub user and repository statistics with GitHub
Actions. Visualizations can include data for both private repositories, and for
repositories you have contributed to, but do not own.

Generated images automatically switch between GitHub light theme and GitHub
dark theme.

## REPOSITORY PRAKTIKUM STRUKTUR DATA

Ini adalah repository untuk praktikum struktur data semester 2 oleh mahasiwa Institut Teknologi Telkom Purwokerto.

This project aims to collect a variety of profile and repository statistics
using the GitHub API. It then generates images that can be displayed in
repository READMEs, or in a user's [Profile
README](https://docs.github.com/en/github/setting-up-and-managing-your-github-profile/managing-your-profile-readme).


## Disclaimer

If the project is used with an access token that has sufficient permissions to
read private repositories, it may leak details about those repositories in
error messages. For example, the `aiohttp` library—used for asynchronous API
requests—may include the requested URL in exceptions, which can leak the name
of private repositories. If there is an exception caused by `aiohttp`, this
exception will be viewable in the Actions tab of the repository fork, and
anyone may be able to see the name of one or more private repositories.
