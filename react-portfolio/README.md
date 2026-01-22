# React Portfolio - Satya Sisir

A modern, responsive portfolio website built with **React** using CDN approach (no build tools required).

## 🚀 Features

- ✅ **Component-Based Architecture**: Clean, reusable React components
- ✅ **Responsive Design**: Optimized for all screen sizes
- ✅ **Smooth Animations**: ScrollReveal and CSS animations
- ✅ **Typing Effect**: Dynamic role display using Typed.js
- ✅ **Interactive Navigation**: Active section highlighting and smooth scroll
- ✅ **Mobile-Friendly**: Hamburger menu for mobile devices
- ✅ **Contact Form**: Functional contact form with state management

## 📁 Project Structure

```
react-portfolio/
├── public/
│   └── images/           # Profile images and assets
├── src/
│   ├── components/
│   │   ├── Header.jsx    # Navigation with mobile menu
│   │   ├── Hero.jsx      # Landing section with typed animation
│   │   ├── Services.jsx  # Service offerings
│   │   ├── Skills.jsx    # Skills with progress bars
│   │   ├── Education.jsx # Timeline for journey
│   │   ├── Contact.jsx   # Contact form
│   │   └── Footer.jsx    # Footer with back-to-top
│   ├── App.jsx           # Main app component
│   └── styles.css        # Global styles
└── index.html            # Entry point
```

## 🎨 Technologies Used

- **React 18** (via CDN)
- **Babel Standalone** (for JSX transformation)
- **Typed.js** (typing animation)
- **ScrollReveal.js** (scroll animations)
- **Font Awesome** (icons)
- **Vanilla CSS** (styling)

## 🖥️ How to Run

### Option 1: Using Live Server (Recommended)

1. Install the **Live Server** extension in VS Code
2. Right-click on `index.html`
3. Select "Open with Live Server"
4. Your portfolio will open at `http://localhost:5500`

### Option 2: Direct Browser Opening

1. Simply double-click on `index.html`
2. The portfolio will open in your default browser

> ⚠️ **Note**: Some features (like ScrollReveal) may not work properly when opening directly due to CORS restrictions. Use Live Server for the best experience.

## 🔧 Why CDN Approach?

This project uses React via CDN instead of npm/build tools because:
- ✅ No Node.js installation required
- ✅ Easier to understand for beginners
- ✅ Instant setup - no dependencies to install
- ✅ Perfect for learning React fundamentals
- ✅ Can be hosted on any static file server

## 🚀 Want to Use Build Tools?

If you want to migrate to a proper React setup with Vite:

1. **Install Node.js** from https://nodejs.org/
2. **Run these commands**:
   ```bash
   npm create vite@latest . --template react
   npm install
   npm install typed.js scrollreveal
   npm run dev
   ```

## 📝 Future Enhancements

- [ ] Add project portfolio section
- [ ] Integrate backend for contact form
- [ ] Add dark/light theme toggle
- [ ] Create blog section
- [ ] Add testimonials section

## 👨‍💻 Developer

**Satya Sisir**
- Student | Web Developer | Software Developer
- Instagram: [@satya_sisir__.pvt](https://www.instagram.com/satya_sisir__.pvt/?hl=en)

---

**Copyright © 2026 Satya Sisir | All Rights Reserved.**
