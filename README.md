<!-- PROJECT SHIELDS -->

[![Contributors][contributors-shield]][contributors-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/sophiabrandt/reason-cat-facts">
    <img src="logo.png" alt="Logo">
  </a>

  <h3 align="center">Reason Cat Facts</h3>

  <p align="center">
    Get cat facts with ReasonReact
    <br />
    <a href="https://github.com/sophiabrandt/reason-cat-facts"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://sophiabrandt.github.io/reason-cat-facts">View Demo</a>
    ·
    <a href="https://github.com/sophiabrandt/reason-cat-facts/issues">Report Bug</a>
    ·
    <a href="https://github.com/sophiabrandt/reason-cat-facts/issues">Request Feature</a>
  </p>
</p>

<!-- TABLE OF CONTENTS -->

## Table of Contents

- [About the Project](#about-the-project)
  - [Built With](#built-with)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)
- [Acknowledgements](#acknowledgements)

<!-- ABOUT THE PROJECT -->

## About The Project

> Fetching data with ReasonReact - with cats! 😸

The project shows a simple ReasonReact app that fetches JSON data from a third-party API.  
Inspired by [A First Reason React app for Javascript developers][reasontut] by [James Friend](https://github.com/jsdf).

**☞ [View Demo][demo]**

The live demo might feel sluggish because it relies on two free Heroku instances that may be slow to start up.

### Built With

- [ReasonML](https://reasonml.github.io/)
- [ReasonReact](https://reasonml.github.io/reason-react/)
- [WingCSS](https://github.com/kbrsh/wing)
- [Cat Facts API](https://github.com/alexwohlbruck/cat-facts)

For the CSS Animations see [Acknowledgements](#acknowledgements).

<!-- GETTING STARTED -->

## Getting Started

To get a local copy up and running follow these steps:

### Prerequisites

You need [Node.js and npm](https://www.npmjs.com/get-npm) or an alternative package manager (i.e., [pnpm](https://pnpm.js.org/)).

```sh
npm install npm@latest -g
```

Install [Bucklescript and Reason](https://reasonml.github.io/docs/en/installation):

```sh
npm install -g bs-platform
```

### Installation

1. Clone the repo

```sh
git clone https://github.com/sophiabrandt/reason-cat-facts.git
```

3. Install NPM packages

```sh
cd reason-cat-facts && npm install
```

<!-- USAGE EXAMPLES -->

## Usage

Run the project locally under `http://localhost:3000` via:

```sh
npm run start
```

Create a production build:

```sh
npm run build
```

<!-- ROADMAP -->

## Roadmap

See the [open issues](https://github.com/sophiabrandt/reason-cat-facts/issues) for a list of proposed features (and known issues).

<!-- CONTRIBUTING -->

## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<!-- LICENSE -->

## License

Distributed under the MIT License. See `LICENSE` for more information.

<!-- CONTACT -->

## Contact

Sophia Brandt - [@hisophiabrandt](https://twitter.com/hisophiabrandt)

Project Link: [https://github.com/sophiabrandt/reason-cat-facts](https://github.com/sophiabrandt/reason-cat-facts)

<!-- ACKNOWLEDGEMENTS -->

## Acknowledgements

- [A First Reason React app for Javascript developers][reasontut]
- [Cors Anywhere](https://github.com/Rob--W/cors-anywhere)
- [SpinKit](https://github.com/tobiasahlin/SpinKit)
- [Pure CSS Gradient Background Animation](https://codepen.io/P1N2O/pen/pyBNzX)
- [Img Shields](https://shields.io)
- [Choose an Open Source License](https://choosealicense.com)
- [Best-README-Template](https://github.com/othneildrew/Best-README-Template/blob/master/README.md)

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/sophiabrandt/reason-cat-facts.svg?style=flat-square
[contributors-url]: https://github.com/sophiabrandt/reason-cat-facts/graphs/contributors
[issues-shield]: https://img.shields.io/github/issues/sophiabrandt/reason-cat-facts.svg?style=flat-square
[issues-url]: https://github.com/sophiabrandt/reason-cat-facts/issues
[license-shield]: https://img.shields.io/github/license/sophiabrandt/reason-cat-facts.svg?style=flat-square
[license-url]: https://github.com/sophiabrandt/reason-cat-facts/blob/master/LICENSE.txt
[demo]: https://sophiabrandt.github.io/reason-cat-facts
[reasontut]: https://jamesfriend.com.au/a-first-reason-react-app-for-js-developers
